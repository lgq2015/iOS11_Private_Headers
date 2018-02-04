/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUDurationFormat : NSObject <NSCopying, TSUDataFormat> {
    NSString * mFormat;
    NSString * mName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)formatWithFormat:(id)arg1 name:(id)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)format;
- (id)formatName;
- (unsigned long long)hash;
- (id)initWithFormat:(id)arg1 name:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)setFormatName:(id)arg1;

@end
