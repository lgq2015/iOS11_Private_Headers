/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
 */

@interface ASDDSPGraphInfo : ASDDSPItemInfo {
    NSArray * _includePaths;
    NSString * _path;
    NSDictionary * _substitutions;
    NSString * _text;
}

@property (nonatomic, retain) NSArray *includePaths;
@property (nonatomic, retain) NSString *path;
@property (nonatomic, retain) NSDictionary *substitutions;
@property (nonatomic, retain) NSString *text;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)includePaths;
- (id)initWithDictionary:(id)arg1 resourcePath:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)path;
- (void)setIncludePaths:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setSubstitutions:(id)arg1;
- (void)setText:(id)arg1;
- (id)substitutions;
- (id)text;

@end
