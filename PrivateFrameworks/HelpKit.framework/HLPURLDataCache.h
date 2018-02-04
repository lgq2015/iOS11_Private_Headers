/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

@interface HLPURLDataCache : NSObject <NSCoding, NSCopying> {
    unsigned long long  _cacheType;
    unsigned long long  _fileSize;
    NSString * _identifier;
    NSString * _lastModified;
    NSString * _locale;
    long long  _maxAge;
    NSDate * _updatedDate;
}

@property (nonatomic) unsigned long long cacheType;
@property (nonatomic, readonly) bool expired;
@property (nonatomic) unsigned long long fileSize;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *lastModified;
@property (nonatomic, retain) NSString *locale;
@property (nonatomic) long long maxAge;
@property (nonatomic, retain) NSDate *updatedDate;

- (void).cxx_destruct;
- (unsigned long long)cacheType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (bool)expired;
- (unsigned long long)fileSize;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)lastModified;
- (id)locale;
- (long long)maxAge;
- (void)setCacheType:(unsigned long long)arg1;
- (void)setFileSize:(unsigned long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLastModified:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setMaxAge:(long long)arg1;
- (void)setUpdatedDate:(id)arg1;
- (id)updatedDate;

@end
