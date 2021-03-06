/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIProtocolPageCookie : RWIProtocolJSONObject

@property (nonatomic, copy) NSString *domain;
@property (nonatomic) double expires;
@property (nonatomic) bool httpOnly;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *path;
@property (nonatomic) bool secure;
@property (nonatomic) bool session;
@property (nonatomic) int size;
@property (nonatomic, copy) NSString *value;

- (id)domain;
- (double)expires;
- (bool)httpOnly;
- (id)initWithName:(id)arg1 value:(id)arg2 domain:(id)arg3 path:(id)arg4 expires:(double)arg5 size:(int)arg6 httpOnly:(bool)arg7 secure:(bool)arg8 session:(bool)arg9;
- (id)name;
- (id)path;
- (bool)secure;
- (bool)session;
- (void)setDomain:(id)arg1;
- (void)setExpires:(double)arg1;
- (void)setHttpOnly:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setSecure:(bool)arg1;
- (void)setSession:(bool)arg1;
- (void)setSize:(int)arg1;
- (void)setValue:(id)arg1;
- (int)size;
- (id)value;

@end
