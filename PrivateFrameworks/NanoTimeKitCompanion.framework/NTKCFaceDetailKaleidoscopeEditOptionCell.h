/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCFaceDetailKaleidoscopeEditOptionCell : NTKCFaceDetailEditOptionCell {
    long long  _userOptionIndex;
    <NTKCFaceDetailKaleidoscopeEditOptionCellDelegate> * delegate;
}

@property (nonatomic) <NTKCFaceDetailKaleidoscopeEditOptionCellDelegate> *delegate;
@property (nonatomic) long long userOptionIndex;

- (void).cxx_destruct;
- (void)_setupFromCollection;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)delegate;
- (void)selectUserOption;
- (void)setDelegate:(id)arg1;
- (void)setUserOptionIndex:(long long)arg1;
- (long long)userOptionIndex;

@end
