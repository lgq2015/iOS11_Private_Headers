/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDPane : NSObject {
    int  mActivePane;
    int  mPaneState;
    EDReference * mTopLeftCell;
    double  mXSplitPosition;
    double  mYSplitPosition;
}

+ (id)pane;

- (int)activePane;
- (void)dealloc;
- (id)description;
- (id)init;
- (int)paneState;
- (void)setActivePane:(int)arg1;
- (void)setPaneState:(int)arg1;
- (void)setTopLeftCell:(id)arg1;
- (void)setXSplitPosition:(double)arg1;
- (void)setYSplitPosition:(double)arg1;
- (id)topLeftCell;
- (double)xSplitPosition;
- (double)ySplitPosition;

@end
