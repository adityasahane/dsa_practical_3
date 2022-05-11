#include<iostream>
#include<string.h>
using namespace std;

class Node
{
    public:
    Node *left_node = NULL;
    string data;
    Node *right_node = NULL;

    Node(string dt)
    {
        data = dt;
    }
};

void display(Node *root)
{
    if(root == NULL)
        return;

    cout<<root->data<<"   ";
    display(root->left_node);
    display(root->right_node);
}


int main()
{
    Node *root, *left_sub, *right_sub, *left_left_topic, *left_right_topic, *right_left_topic, *right_right_topic;

    // Year of Study
    root = new Node("Second-Year");

    // Subjects
    left_sub =  new Node("Software-Engineering");
    right_sub = new Node("Data-Structure");

    // Topics for Software Engineering
    left_left_topic = new Node("Requirement");
    left_right_topic = new Node("Planning");

    //Topics for Data Structure
    right_left_topic = new Node("Hashing");
    right_right_topic = new Node("Trees");


    root->left_node = left_sub;
    root->right_node = right_sub;

    left_sub->left_node = left_left_topic;
    left_sub->right_node = left_right_topic;

    right_sub->left_node = right_left_topic;
    right_sub->right_node = right_right_topic;
    
    cout<<endl<<endl;
    display(root);
    cout<<endl<<endl<<endl;

    return 0;
}