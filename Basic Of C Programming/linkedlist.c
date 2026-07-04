#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Comment Node
struct Comment {
    char text[100];
    struct Comment *next;
};

// Post Node
struct Post {
    int id;
    char content[200];

    int likes;
    int shares;

    struct Comment *comments;

    struct Post *next;
};

struct Post *head = NULL;


// Add Post
void addPost(int id, char content[]) {

    struct Post *newPost =
        (struct Post*)malloc(sizeof(struct Post));

    newPost->id = id;

    strcpy(newPost->content, content);

    newPost->likes = 0;
    newPost->shares = 0;

    newPost->comments = NULL;
    newPost->next = NULL;

    if(head == NULL) {
        head = newPost;
        return;
    }

    struct Post *temp = head;

    while(temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newPost;
}


// Add Comment
void addComment(int postId, char comment[]) {

    struct Post *temp = head;

    while(temp != NULL) {

        if(temp->id == postId) {

            struct Comment *newComment =
                (struct Comment*)
                malloc(sizeof(struct Comment));

            strcpy(newComment->text, comment);

            newComment->next = NULL;

            if(temp->comments == NULL) {
                temp->comments = newComment;
            }
            else {

                struct Comment *c =
                    temp->comments;

                while(c->next != NULL) {
                    c = c->next;
                }

                c->next = newComment;
            }

            return;
        }

        temp = temp->next;
    }

    printf("Post not found\n");
}


// Like Post
void likePost(int postId) {

    struct Post *temp = head;

    while(temp != NULL) {

        if(temp->id == postId) {
            temp->likes++;
            return;
        }

        temp = temp->next;
    }
}


// Share Post
void sharePost(int postId) {

    struct Post *temp = head;

    while(temp != NULL) {

        if(temp->id == postId) {
            temp->shares++;
            return;
        }

        temp = temp->next;
    }
}


// Delete Post
void deletePost(int postId) {

    struct Post *temp = head;
    struct Post *prev = NULL;

    if(head == NULL)
        return;

    if(head->id == postId) {

        head = head->next;

        free(temp);

        return;
    }

    while(temp != NULL &&
          temp->id != postId) {

        prev = temp;

        temp = temp->next;
    }

    if(temp == NULL) {
        printf("Post not found\n");
        return;
    }

    prev->next = temp->next;

    free(temp);
}


// Display Comments
void displayComments(
    struct Comment *commentHead) {

    while(commentHead != NULL) {

        printf("   - %s\n",
               commentHead->text);

        commentHead =
            commentHead->next;
    }
}


// Reverse Display
void displayReverse(
    struct Post *node) {

    if(node == NULL)
        return;

    displayReverse(node->next);

    printf("\n-------------------\n");

    printf("Post ID : %d\n",
           node->id);

    printf("Content : %s\n",
           node->content);

    printf("Likes : %d\n",
           node->likes);

    printf("Shares : %d\n",
           node->shares);

    printf("Comments:\n");

    displayComments(
        node->comments);
}


// Main Function
int main() {

    addPost(
        1,
        "Learning Linked List");

    addPost(
        2,
        "Day 49 Python Journey");

    addPost(
        3,
        "Started DSA Practice");


    addComment(
        1,
        "Great work");

    addComment(
        1,
        "Keep learning");

    addComment(
        2,
        "Nice post");


    likePost(1);
    likePost(1);

    sharePost(2);

    deletePost(3);


    printf(
    "\nSOCIAL MEDIA FEED\n");

    displayReverse(head);

    return 0;
}