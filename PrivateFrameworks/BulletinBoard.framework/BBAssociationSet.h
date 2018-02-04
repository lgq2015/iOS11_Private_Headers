/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBAssociationSet : NSObject {
    unsigned long long  _associatedObjectMemoryPointerFunction;
    NSString * _associationSetKey;
}

+ (id)setWithStrongAssociation;
+ (id)setWithWeakAssociation;

- (void).cxx_destruct;
- (id)_initWithMemoryPointerFunction:(unsigned long long)arg1;
- (void)associateObject:(id)arg1 withObject:(id)arg2;
- (id)associatedObjectsForObject:(id)arg1;
- (void)copyAssociationsForObject:(id)arg1 toObject:(id)arg2;

@end
