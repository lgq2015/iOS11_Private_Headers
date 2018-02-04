/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface DeserializedTransaction : NSObject {
    CHRecentCall * _call;
    unsigned long long  _type;
}

@property (retain) CHRecentCall *call;
@property unsigned long long type;

- (void).cxx_destruct;
- (id)call;
- (id)initWithCall:(id)arg1 andType:(unsigned long long)arg2;
- (void)setCall:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
