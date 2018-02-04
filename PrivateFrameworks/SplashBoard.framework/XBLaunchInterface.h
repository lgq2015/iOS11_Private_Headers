/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
 */

@interface XBLaunchInterface : NSObject <BSXPCCoding, NSCoding> {
    bool  _default;
    NSString * _identifier;
    NSString * _name;
    unsigned long long  _type;
    NSArray * _urlSchemes;
}

@property (getter=_isDefault, nonatomic) bool _default;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly) bool isStoryboard;
@property (nonatomic, readonly) bool isXIB;
@property (nonatomic, copy) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long type;
@property (nonatomic, retain) NSArray *urlSchemes;

- (void).cxx_destruct;
- (bool)_isDefault;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 name:(id)arg2 identifier:(id)arg3 urlSchemes:(id)arg4 isDefault:(bool)arg5;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isStoryboard;
- (bool)isXIB;
- (id)name;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setUrlSchemes:(id)arg1;
- (void)set_default:(bool)arg1;
- (unsigned long long)type;
- (id)urlSchemes;

@end
