/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ODXState : OCXReadState {
    CXNamespace * mODXDiagramNamespace;
    OAXDrawingState * mOfficeArtState;
}

@property (nonatomic, retain) CXNamespace *ODXDiagramNamespace;

- (id)ODXDiagramNamespace;
- (void)dealloc;
- (id)initWithOfficeArtState:(id)arg1;
- (id)officeArtState;
- (void)setODXDiagramNamespace:(id)arg1;
- (void)setupNSForXMLFormat:(int)arg1;

@end
