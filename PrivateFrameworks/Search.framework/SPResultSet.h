/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@interface SPResultSet : NSObject <NSSecureCoding> {
    NSArray * _resultSections;
    NSArray * _stableSections;
}

@property (nonatomic, readonly) NSArray *resultSections;
@property (nonatomic, readonly) NSArray *stableSections;

+ (void)initialize;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSections:(id)arg1 stableSections:(id)arg2;
- (id)resultSections;
- (id)stableSections;

@end
