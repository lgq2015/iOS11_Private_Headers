/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFItemDiffOperation : NSObject <HFDiffOperation> {
    NSIndexPath * _fromIndexPath;
    id  _item;
    NSIndexPath * _toIndexPath;
    unsigned long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSIndexPath *fromIndexPath;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) id item;
@property (nonatomic, readonly, copy) NSString *operationDescription;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSIndexPath *toIndexPath;
@property (nonatomic, readonly) unsigned long long type;

+ (id)deleteOperationWithItem:(id)arg1 atIndexPath:(id)arg2;
+ (id)insertOperationWithItem:(id)arg1 atIndexPath:(id)arg2;
+ (id)moveOperationWithItem:(id)arg1 fromIndexPath:(id)arg2 toIndexPath:(id)arg3;
+ (id)reloadOperationWithItem:(id)arg1 atIndexPath:(id)arg2;

- (void).cxx_destruct;
- (id)_operationDescriptionWithVerboseType:(bool)arg1;
- (id)description;
- (id)fromIndexPath;
- (unsigned long long)hash;
- (id)initWithOperationType:(unsigned long long)arg1 item:(id)arg2 fromIndexPath:(id)arg3 toIndexPath:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)item;
- (id)operationDescription;
- (id)toIndexPath;
- (unsigned long long)type;

@end
