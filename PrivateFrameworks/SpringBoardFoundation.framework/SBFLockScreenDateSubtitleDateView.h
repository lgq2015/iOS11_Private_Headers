/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFLockScreenDateSubtitleDateView : SBFLockScreenDateSubtitleView {
    double  _alignmentPercent;
    SBFLockScreenAlternateDateLabel * _alternateDateLabel;
    NSDate * _date;
    bool  _useCompactDateFormat;
}

@property (nonatomic) double alignmentPercent;
@property (nonatomic, retain) SBFLockScreenAlternateDateLabel *alternateDateLabel;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic) bool useCompactDateFormat;

+ (id)dateTimeLunarDateFont;
+ (double)scaledFontSize:(double)arg1 withMaximumFontSizeCategory:(id)arg2;
+ (double)subtitleLabelToLunarDateLabelBaselineDifferenceY;

- (void).cxx_destruct;
- (id)_createReplicateView;
- (double)_lunarDateLabelYOffsetFromDateLabel;
- (void)_setupAlternateDateLabel;
- (void)_updateDateLabelForCompact;
- (double)alignmentPercent;
- (id)alternateDateLabel;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })alternateDateLabelFrame;
- (id)date;
- (void)dealloc;
- (id)initWithDate:(id)arg1;
- (void)layoutSubviews;
- (id)replicate;
- (void)setAlignmentPercent:(double)arg1;
- (void)setAlternateDateLabel:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setStrength:(double)arg1;
- (void)setUseCompactDateFormat:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })subtitleLabelFrame;
- (void)traitCollectionDidChange:(id)arg1;
- (bool)useCompactDateFormat;

@end
