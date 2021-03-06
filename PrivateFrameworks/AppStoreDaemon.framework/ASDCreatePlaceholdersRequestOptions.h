/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDCreatePlaceholdersRequestOptions : ASDRequestOptions {
    NSArray * _items;
}

@property (nonatomic, readonly) NSArray *items;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithApplicationMetadata:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)items;

@end
