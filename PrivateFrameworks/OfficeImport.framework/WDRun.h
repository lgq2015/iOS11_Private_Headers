/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDRun : NSObject {
    WDParagraph * mParagraph;
}

- (void)clearProperties;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithParagraph:(id)arg1;
- (bool)isEmpty;
- (id)paragraph;
- (int)runType;

@end
