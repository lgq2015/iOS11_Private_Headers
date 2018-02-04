/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADFontScheme : NSObject {
    OADFontCollection * _majorFont;
    OADFontCollection * _minorFont;
    NSString * _name;
}

@property (nonatomic, readonly) OADFontCollection *majorFont;
@property (nonatomic, readonly) OADFontCollection *minorFont;
@property (nonatomic, copy) NSString *name;

- (void)dealloc;
- (id)fontForId:(int)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (id)majorFont;
- (id)minorFont;
- (id)name;
- (void)setName:(id)arg1;
- (void)validateFontScheme;

@end
