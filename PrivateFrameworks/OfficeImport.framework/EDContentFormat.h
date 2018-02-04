/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDContentFormat : NSObject <EDKeyedObject, NSCopying> {
    bool  mBuiltIn;
    unsigned long long  mFormatId;
    EDString * mFormatString;
    bool  mReferenced;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)contentFormatWithFormatString:(id)arg1;
+ (id)contentFormatWithFormatString:(id)arg1 formatId:(unsigned long long)arg2;
+ (id)contentFormatWithNSString:(id)arg1 formatId:(unsigned long long)arg2 builtIn:(bool)arg3;

- (bool)builtIn;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)formatId;
- (id)formatString;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToContentFormat:(id)arg1;
- (long long)key;
- (bool)referenced;
- (void)setFormatId:(unsigned long long)arg1;
- (void)setReferenced:(bool)arg1;

@end
