/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

@interface _PASBloomFilterDummy : _PASBloomFilter {
    bool  _result;
}

+ (id)instanceThatAlwaysReturns:(bool)arg1;

- (bool)getWithHashes:(id)arg1;
- (id)initWithResult:(bool)arg1;

@end
