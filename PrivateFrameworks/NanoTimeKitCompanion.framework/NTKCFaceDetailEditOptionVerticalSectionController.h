/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCFaceDetailEditOptionVerticalSectionController : NTKCFaceDetailEditOptionSectionController

@property (nonatomic, retain) NSMutableArray *rows;

- (bool)_canSelectRow:(long long)arg1;
- (void)_setupWithCollection:(id)arg1;
- (bool)collectionChanged:(id)arg1 withSelectedOptions:(id)arg2;
- (void)didSelectRow:(long long)arg1;
- (void)faceDidChange;
- (id)initWithTableView:(id)arg1 face:(id)arg2 inGallery:(bool)arg3 editOptionCollection:(id)arg4 faceView:(id)arg5;
- (void)reloadActionRow;
- (void)setSelectedOptions:(id)arg1;

@end
