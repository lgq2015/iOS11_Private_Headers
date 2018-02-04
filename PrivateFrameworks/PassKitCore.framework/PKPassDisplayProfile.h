/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPassDisplayProfile : PKDisplayProfile <NSCopying, NSSecureCoding> {
    PKColor * _backgroundColor;
    PKColor * _foregroundColor;
    bool  _hasBackgroundImage;
    bool  _hasStripImage;
    PKColor * _labelColor;
    NSData * _manifestHash;
    long long  _passStyle;
    PKColor * _stripColor;
    bool  _tallCode;
}

@property (nonatomic, retain) PKColor *backgroundColor;
@property (nonatomic, retain) PKColor *foregroundColor;
@property (nonatomic) bool hasBackgroundImage;
@property (nonatomic) bool hasStripImage;
@property (nonatomic, retain) PKColor *labelColor;
@property (nonatomic, readonly) long long layoutMode;
@property (nonatomic, retain) NSData *manifestHash;
@property (nonatomic) long long passStyle;
@property (nonatomic, readonly) bool showsBackgroundImage;
@property (nonatomic, readonly) bool showsStripImage;
@property (nonatomic, retain) PKColor *stripColor;
@property (nonatomic) bool tallCode;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)foregroundColor;
- (bool)hasBackgroundImage;
- (bool)hasStripImage;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;
- (id)labelColor;
- (long long)layoutMode;
- (id)manifestHash;
- (long long)passStyle;
- (void)setBackgroundColor:(id)arg1;
- (void)setForegroundColor:(id)arg1;
- (void)setHasBackgroundImage:(bool)arg1;
- (void)setHasStripImage:(bool)arg1;
- (void)setLabelColor:(id)arg1;
- (void)setManifestHash:(id)arg1;
- (void)setPassStyle:(long long)arg1;
- (void)setStripColor:(id)arg1;
- (void)setTallCode:(bool)arg1;
- (bool)showsBackgroundImage;
- (bool)showsStripImage;
- (id)stripColor;
- (bool)tallCode;
- (long long)type;

@end
