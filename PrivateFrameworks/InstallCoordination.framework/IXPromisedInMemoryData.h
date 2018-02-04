/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
 */

@interface IXPromisedInMemoryData : IXOwnedDataPromise <NSSecureCoding>

@property (nonatomic, retain) IXPromisedInMemoryDataSeed *seed;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 client:(unsigned long long)arg2 data:(id)arg3;
- (id)initWithSeed:(id)arg1;
- (void)resetWithCompletion:(id /* block */)arg1;
- (Class)seedClass;

@end
