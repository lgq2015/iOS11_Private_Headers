/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

@interface DOCDownloadButton : UIControl {
    unsigned long long  _downloadState;
    UILabel * _downloadedLabel;
    UIVisualEffectView * _downloadedView;
    UIImageView * _normalImageView;
    DOCDownloadSpinningArcView * _pendingView;
    DOCDownloadProgressView * _progressView;
    DOCDownloadStopView * _stopSymbolView;
}

@property (nonatomic) unsigned long long downloadState;
@property (nonatomic) UILabel *downloadedLabel;
@property (nonatomic) UIVisualEffectView *downloadedView;
@property (nonatomic) UIImageView *normalImageView;
@property (nonatomic) DOCDownloadSpinningArcView *pendingView;
@property (nonatomic) double progress;
@property (nonatomic) DOCDownloadProgressView *progressView;
@property (nonatomic) DOCDownloadStopView *stopSymbolView;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (unsigned long long)downloadState;
- (id)downloadedLabel;
- (id)downloadedView;
- (id)normalImageView;
- (id)pendingView;
- (double)progress;
- (id)progressView;
- (void)setDownloadState:(unsigned long long)arg1;
- (void)setDownloadedLabel:(id)arg1;
- (void)setDownloadedView:(id)arg1;
- (void)setNormalImageView:(id)arg1;
- (void)setPendingView:(id)arg1;
- (void)setProgress:(double)arg1;
- (void)setProgress:(double)arg1 animated:(bool)arg2;
- (void)setProgressView:(id)arg1;
- (void)setStopSymbolView:(id)arg1;
- (unsigned long long)state;
- (id)stopSymbolView;
- (void)tintColorDidChange;
- (void)updateForState;

@end
