/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCFaceDetailTapToSpeakSectionController : NTKCFaceDetailSectionController <NTKCFaceDetailToggleCellDelegate> {
    NTKCFaceDetailTapToSpeakDescriptionCell * _descriptionCell;
    NTKCFaceDetailTapToSpeakCell * _tapCell;
    NPSDomainAccessor * _tapToSpeakDomainAccessor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NTKCFaceDetailTapToSpeakDescriptionCell *descriptionCell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NTKCFaceDetailTapToSpeakCell *tapCell;
@property (nonatomic, retain) NPSDomainAccessor *tapToSpeakDomainAccessor;

+ (bool)hasTapToSpeakSectionForFace:(id)arg1 inGallery:(bool)arg2;

- (void).cxx_destruct;
- (void)_commonInit;
- (id)descriptionCell;
- (void)faceDidChange;
- (void)setDescriptionCell:(id)arg1;
- (void)setTapCell:(id)arg1;
- (void)setTapToSpeakDomainAccessor:(id)arg1;
- (id)tapCell;
- (id)tapToSpeakDomainAccessor;
- (id)titleForHeader;
- (void)toggleCell:(id)arg1 didToggle:(bool)arg2;

@end
