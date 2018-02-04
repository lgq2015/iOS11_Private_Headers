/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PBOfficeArtReaderState : OABReaderState {
    PBPresentationReaderState * mPresentationState;
    PXPresentationState * mXmlDocumentState;
}

- (void)dealloc;
- (id)drawableOnTgtSlideForShapeId:(int)arg1;
- (id)initWithPresentationState:(id)arg1;
- (id)presentationState;
- (id)xmlDocumentState;
- (id)xmlDrawingState;

@end
