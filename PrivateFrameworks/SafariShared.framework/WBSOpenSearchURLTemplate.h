/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSOpenSearchURLTemplate : NSObject <NSCopying, NSSecureCoding> {
    NSMutableArray * _parameters;
    NSMutableDictionary * _parametersByName;
    NSString * _templateString;
}

@property (nonatomic, readonly, copy) NSString *templateString;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URLWithSearchTerms:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (bool)includesParameter:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)templateByAddingParameter:(id)arg1 asURLQueryParameter:(id)arg2;
- (id)templateBySubstitutingValue:(id)arg1 forParameter:(id)arg2;
- (id)templateBySubstitutingValues:(id)arg1;
- (id)templateString;

@end
