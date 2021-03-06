/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDShapeSearchResult : NSObject {
    id  _identifier;
    bool  _isExactMatch;
    NSString * _matchingKeyword;
    unsigned long long  _priority;
}

@property (nonatomic, readonly) id identifier;
@property (nonatomic) bool isExactMatch;
@property (nonatomic, readonly) NSString *matchingKeyword;
@property (nonatomic, readonly) unsigned long long priority;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 matchingKeyword:(id)arg2 priority:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isExactMatch;
- (id)matchingKeyword;
- (unsigned long long)priority;
- (void)setIsExactMatch:(bool)arg1;

@end
