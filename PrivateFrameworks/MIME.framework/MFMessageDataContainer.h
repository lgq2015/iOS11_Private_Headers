/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFMessageDataContainer : NSObject {
    NSData * _data;
    bool  _incomplete;
    bool  _partial;
}

- (id)data;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)initWithData:(id)arg1 partial:(bool)arg2 incomplete:(bool)arg3;

@end
