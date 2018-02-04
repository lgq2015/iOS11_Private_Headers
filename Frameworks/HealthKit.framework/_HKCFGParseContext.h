/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKCFGParseContext : NSObject {
    _HKCFGNodeCache * _cache;
    unsigned long long  _lengthAllowance;
    unsigned long long  _recursiveDepth;
    NSScanner * _scanner;
}

@property (nonatomic, readonly) _HKCFGNodeCache *cache;
@property (nonatomic, readonly) unsigned long long lengthAllowance;
@property (nonatomic, readonly) unsigned long long recursiveDepth;
@property (nonatomic, readonly) NSScanner *scanner;

- (void).cxx_destruct;
- (id)cache;
- (void)decreaseLengthAllowance:(unsigned long long)arg1;
- (void)decrementRecursiveDepth;
- (void)increaseLengthAllowance:(unsigned long long)arg1;
- (void)incrementRecursiveDepth;
- (id)initWithScanner:(id)arg1 lengthAllowance:(unsigned long long)arg2;
- (unsigned long long)lengthAllowance;
- (unsigned long long)recursiveDepth;
- (id)scanner;

@end
