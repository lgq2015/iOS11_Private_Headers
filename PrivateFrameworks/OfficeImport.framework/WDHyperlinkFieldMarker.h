/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDHyperlinkFieldMarker : WDFieldMarker {
    NSString * mFragment;
    unsigned int  mInternalLink;
    NSString * mLink;
}

@property (nonatomic, retain) NSString *fragment;
@property (nonatomic) bool internalLink;
@property (nonatomic, retain) NSString *link;

- (void)dealloc;
- (id)description;
- (id)fragment;
- (bool)internalLink;
- (id)link;
- (int)runType;
- (void)setFragment:(id)arg1;
- (void)setInternalLink:(bool)arg1;
- (void)setLink:(id)arg1;

@end
