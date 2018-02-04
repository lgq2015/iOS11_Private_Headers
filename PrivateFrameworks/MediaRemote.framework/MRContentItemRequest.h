/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRContentItemRequest : NSObject <NSCoding> {
    void * _item;
    void * _request;
}

@property (nonatomic) void*item;
@property (nonatomic) void*request;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItem:(void*)arg1 request:(void*)arg2;
- (void*)item;
- (void*)request;
- (void)setItem:(void*)arg1;
- (void)setRequest:(void*)arg1;

@end
