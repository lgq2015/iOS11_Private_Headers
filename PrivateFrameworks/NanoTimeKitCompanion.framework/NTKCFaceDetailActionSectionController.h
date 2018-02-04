/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCFaceDetailActionSectionController : NTKCFaceDetailSectionController {
    <NTKCFaceDetailActionSectionDelegate> * _delegate;
    NTKCFaceDetailActionCell * _deleteCell;
    NTKCFaceDetailActionCell * _selectCell;
}

@property (nonatomic) <NTKCFaceDetailActionSectionDelegate> *delegate;
@property (nonatomic, retain) NTKCFaceDetailActionCell *deleteCell;
@property (nonatomic, retain) NTKCFaceDetailActionCell *selectCell;

- (void).cxx_destruct;
- (long long)_actionForRow:(long long)arg1;
- (bool)_canSelectRow:(long long)arg1;
- (void)_commonInit;
- (id)_spacerCell;
- (id)cellForRow:(long long)arg1;
- (id)delegate;
- (id)deleteCell;
- (void)didSelectRow:(long long)arg1;
- (double)heightForRow:(long long)arg1;
- (long long)numberOfRows;
- (id)selectCell;
- (void)setDelegate:(id)arg1;
- (void)setDeleteCell:(id)arg1;
- (void)setSelectCell:(id)arg1;

@end
