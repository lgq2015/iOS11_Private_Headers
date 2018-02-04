/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

@interface TSURetainedPointerSet : TSUPointerSet

+ (Class)privateMutableClass;
+ (Class)privateNonMutableClass;

- (id)allObjects;
- (id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2;

@end
