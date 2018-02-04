/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveExperts.framework/ProactiveExperts
 */

@interface PEXAutocompleteContext : NSObject {
    NSString * _namePrefix;
    NSArray * _recipients;
}

@property (nonatomic, retain) NSString *namePrefix;
@property (nonatomic, retain) NSArray *recipients;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAutocompleteContext:(id)arg1;
- (id)namePrefix;
- (id)recipients;
- (void)setNamePrefix:(id)arg1;
- (void)setRecipients:(id)arg1;

@end
