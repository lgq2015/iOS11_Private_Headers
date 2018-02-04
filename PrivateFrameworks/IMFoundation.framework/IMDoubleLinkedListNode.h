/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMDoubleLinkedListNode : NSObject {
    IMDoubleLinkedListNode * _next;
    id  _object;
    IMDoubleLinkedListNode * _prev;
}

@property (retain) IMDoubleLinkedListNode *next;
@property (retain) id object;
@property (retain) IMDoubleLinkedListNode *prev;

- (void)dealloc;
- (id)initWithObject:(id)arg1;
- (id)next;
- (id)object;
- (void)orphan;
- (id)prev;
- (void)removeFromList;
- (void)setNext:(id)arg1;
- (void)setObject:(id)arg1;
- (void)setPrev:(id)arg1;

@end
