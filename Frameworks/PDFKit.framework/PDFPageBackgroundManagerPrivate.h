/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFPageBackgroundManagerPrivate : NSObject {
    unsigned long long  activePageIndex;
    NSMutableDictionary * backgroundImageCache;
    <PDFPageBackgroundManagerDelegate> * documentDelegate;
    bool  isCancled;
    bool  isWorking;
    PDFRenderingProperties * renderingProperties;
    bool  willForceUpdate;
}

- (void).cxx_destruct;

@end
