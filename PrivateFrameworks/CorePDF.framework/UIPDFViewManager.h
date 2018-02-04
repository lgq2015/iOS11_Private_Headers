/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface UIPDFViewManager : NSObject {
    UIView * _activeView;
}

+ (id)sharedViewManager;

- (void)makeViewActive:(id)arg1;
- (void)viewReleased:(id)arg1;

@end
