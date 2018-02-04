/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMOrderedMutableDictionary : NSObject {
    NSMutableDictionary * _dictionary;
    IMDoubleLinkedList * _linkedList;
}

- (bool)containsKey:(id)arg1;
- (bool)containsOrderedObject:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)orderedObjectForKey:(id)arg1;
- (id)orderedObjects;
- (void)removeOrderedObjectForKey:(id)arg1;
- (void)setOrderedObject:(id)arg1 forKey:(id)arg2;

@end
