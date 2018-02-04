/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAlternateTrack : NSObject {
    NSString * _canonicalLanguageIdentifier;
    NSString * _displayName;
    bool  _isDVS;
    bool  _isMainProgram;
    AVMediaSelectionOption * _option;
}

@property (nonatomic, readonly) NSString *canonicalLanguageIdentifier;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, readonly) bool isDVS;
@property (nonatomic, readonly) bool isMainProgram;
@property (nonatomic, readonly) AVMediaSelectionOption *option;

+ (id)threeCharCodesForEncodedISO639_2_T:(id)arg1;

- (void).cxx_destruct;
- (void)_setDisplayNameFromOption:(id)arg1;
- (id)canonicalLanguageIdentifier;
- (long long)compare:(id)arg1;
- (id)description;
- (id)displayName;
- (id)initWithOption:(id)arg1;
- (bool)isDVS;
- (bool)isEqual:(id)arg1;
- (bool)isMainProgram;
- (id)option;
- (void)setDisplayName:(id)arg1;

@end
