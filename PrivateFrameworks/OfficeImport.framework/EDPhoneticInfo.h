/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDPhoneticInfo : NSObject <EDImmutableObject, NSCopying> {
    int  mAlign;
    bool  mDoNotModify;
    unsigned long long  mFontIndex;
    EDResources * mResources;
    EDCollection * mRuns;
    NSString * mString;
    int  mType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)phoneticInfoWithResources:(id)arg1;

- (int)align;
- (void)appendString:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)font;
- (unsigned long long)fontIndex;
- (unsigned long long)hash;
- (id)initWithResources:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToEDPhoneticInfo:(id)arg1;
- (void)prependString:(id)arg1;
- (id)runs;
- (void)setAlign:(int)arg1;
- (void)setDoNotModify:(bool)arg1;
- (void)setFont:(id)arg1;
- (void)setFontIndex:(unsigned long long)arg1;
- (void)setString:(id)arg1;
- (void)setType:(int)arg1;
- (id)string;
- (int)type;

@end
