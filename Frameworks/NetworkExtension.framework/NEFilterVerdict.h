/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEFilterVerdict : NSObject <NSCopying, NSSecureCoding> {
    bool  _drop;
    bool  _needRules;
    bool  _remediate;
    NSString * _remediationButtonTextMapKey;
    NSString * _remediationURLMapKey;
    bool  _shouldReport;
    bool  _urlAppendString;
    NSString * _urlAppendStringMapKey;
}

@property bool drop;
@property bool needRules;
@property bool remediate;
@property (retain) NSString *remediationButtonTextMapKey;
@property (retain) NSString *remediationURLMapKey;
@property bool shouldReport;
@property bool urlAppendString;
@property (retain) NSString *urlAppendStringMapKey;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)drop;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDrop:(bool)arg1 remediate:(bool)arg2;
- (bool)needRules;
- (bool)remediate;
- (id)remediationButtonTextMapKey;
- (id)remediationURLMapKey;
- (void)setDrop:(bool)arg1;
- (void)setNeedRules:(bool)arg1;
- (void)setRemediate:(bool)arg1;
- (void)setRemediationButtonTextMapKey:(id)arg1;
- (void)setRemediationURLMapKey:(id)arg1;
- (void)setShouldReport:(bool)arg1;
- (void)setUrlAppendString:(bool)arg1;
- (void)setUrlAppendStringMapKey:(id)arg1;
- (bool)shouldReport;
- (bool)urlAppendString;
- (id)urlAppendStringMapKey;

@end
