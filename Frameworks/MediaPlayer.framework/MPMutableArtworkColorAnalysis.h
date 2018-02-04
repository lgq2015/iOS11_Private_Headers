/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMutableArtworkColorAnalysis : MPArtworkColorAnalysis

@property (nonatomic, retain) UIColor *backgroundColor;
@property (getter=isBackgroundColorLight, nonatomic) bool backgroundColorLight;
@property (nonatomic, retain) UIColor *primaryTextColor;
@property (getter=isPrimaryTextColorLight, nonatomic) bool primaryTextColorLight;
@property (nonatomic, retain) UIColor *secondaryTextColor;
@property (getter=isSecondaryTextColorLight, nonatomic) bool secondaryTextColorLight;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBackgroundColorLight:(bool)arg1;
- (void)setPrimaryTextColor:(id)arg1;
- (void)setPrimaryTextColorLight:(bool)arg1;
- (void)setSecondaryTextColor:(id)arg1;
- (void)setSecondaryTextColorLight:(bool)arg1;

@end
