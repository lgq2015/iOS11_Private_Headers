/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKUpNextElementUpdateOperation : NSObject {
    NTKUpNextElement * _element;
    NSIndexPath * _indexPath;
    NSIndexPath * _movedToIndexPath;
    unsigned long long  _type;
}

@property (nonatomic, readonly) NTKUpNextElement *element;
@property (nonatomic, readonly) NSIndexPath *indexPath;
@property (nonatomic, readonly) NSIndexPath *movedToIndexPath;
@property (nonatomic, readonly) unsigned long long type;

+ (id)insertElement:(id)arg1 atIndex:(id)arg2;
+ (id)moveElement:(id)arg1 fromIndex:(id)arg2 toIndex:(id)arg3;
+ (id)refreshElement:(id)arg1 atIndex:(id)arg2;
+ (id)reloadElement:(id)arg1 atIndex:(id)arg2;
+ (id)removeElement:(id)arg1 atIndex:(id)arg2;

- (void).cxx_destruct;
- (id)description;
- (id)element;
- (unsigned long long)hash;
- (id)indexPath;
- (id)initWithElement:(id)arg1 indexPath:(id)arg2 newIndexPath:(id)arg3 updateType:(unsigned long long)arg4;
- (bool)isEqual:(id)arg1;
- (id)movedToIndexPath;
- (unsigned long long)type;

@end
