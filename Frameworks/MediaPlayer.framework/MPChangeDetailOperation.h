/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPChangeDetailOperation : NSObject {
    NSIndexPath * _finalIndexPath;
    NSIndexPath * _previousIndexPath;
    long long  _type;
}

@property (nonatomic, readonly) NSIndexPath *finalIndexPath;
@property (nonatomic, readonly) NSIndexPath *indexPath;
@property (nonatomic, readonly) NSIndexPath *previousIndexPath;
@property (nonatomic, readonly) long long type;

+ (id)deleteOperationWithIndexPath:(id)arg1;
+ (id)insertOperationWithIndexPath:(id)arg1;
+ (id)operationWithType:(long long)arg1 previousIndexPath:(id)arg2 finalIndexPath:(id)arg3;
+ (id)operationsWithPreviousCount:(long long)arg1 finalCount:(long long)arg2 previousBaseIndexPath:(id)arg3 finalBaseIndexPath:(id)arg4 isEqualBlock:(id /* block */)arg5;
+ (id)replaceOperationWithPreviousIndexPath:(id)arg1 finalIndexPath:(id)arg2;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)finalIndexPath;
- (id)indexPath;
- (id)previousIndexPath;
- (long long)type;

@end
