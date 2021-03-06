/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSDisplayConfiguration : NSObject <BSDescriptionProviding, BSXPCCoding, NSCopying, NSSecureCoding> {
    NSSet * _availableModes;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    CADisplay * _caDisplay;
    bool  _cloningSupported;
    FBSDisplayMode * _currentMode;
    unsigned int  _deprecated_seed;
    NSString * _deviceName;
    NSString * _hardwareIdentifier;
    FBSDisplayIdentity * _identity;
    NSString * _name;
    NSSet * _otherModes;
    struct CGSize { 
        double width; 
        double height; 
    }  _overscanAmounts;
    long long  _overscanCompensation;
    bool  _overscanned;
    int  _pid;
    struct CGSize { 
        double width; 
        double height; 
    }  _pixelSize;
    FBSDisplayMode * _preferredMode;
    struct CGSize { 
        double width; 
        double height; 
    }  _safeOverscanRatio;
    long long  _tags;
}

@property (nonatomic, readonly, copy) NSSet *availableModes;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (getter=isCarDisplay, nonatomic, readonly) bool carDisplay;
@property (getter=isCloningSupported, nonatomic, readonly) bool cloningSupported;
@property (nonatomic, readonly) long long colorGamut;
@property (nonatomic, readonly, copy) FBSDisplayMode *currentMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *deviceName;
@property (getter=isExternal, nonatomic, readonly) bool external;
@property (nonatomic, readonly, copy) NSString *hardwareIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) FBSDisplayIdentity *identity;
@property (getter=isMainDisplay, nonatomic, readonly) bool mainDisplay;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } nativeCenter;
@property (nonatomic, readonly) double nativeOrientation;
@property (nonatomic, readonly) long long overscanCompensation;
@property (getter=isOverscanned, nonatomic, readonly) bool overscanned;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } pixelSize;
@property (nonatomic, readonly, copy) FBSDisplayMode *preferredMode;
@property (nonatomic, readonly) double refreshRate;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } safeOverscanRatio;
@property (nonatomic, readonly) double scale;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long tags;

// Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices

+ (bool)supportsSecureCoding;

- (id)CADisplay;
- (id)_initWithDisplay:(id)arg1 assertIfInvalid:(bool)arg2;
- (id)_initWithIdentity:(id)arg1 hardwareIdentifier:(id)arg2 name:(id)arg3 deviceName:(id)arg4 seed:(unsigned int)arg5 tags:(long long)arg6 currentMode:(id)arg7 preferredMode:(id)arg8 otherModes:(id)arg9 cloningSupported:(bool)arg10 overscanned:(bool)arg11 overscanCompensation:(long long)arg12 safeOverscanRatio:(struct CGSize { double x1; double x2; })arg13 pixelSize:(struct CGSize { double x1; double x2; })arg14 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg15 validityCheck:(long long)arg16;
- (id)_nameForDisplayType;
- (long long)_nativeRotation;
- (id)availableModes;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (id)caDisplay;
- (long long)colorGamut;
- (id)copyForSecureRendering;
- (id)copyWithUniqueIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentMode;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)deviceName;
- (unsigned int)displayID;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (bool)expectsSecureRendering;
- (id)hardwareIdentifier;
- (unsigned long long)hash;
- (id)identity;
- (id)init;
- (id)initWithCADisplay:(id)arg1;
- (id)initWithCADisplay:(id)arg1 isMainDisplay:(bool)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isCarDisplay;
- (bool)isCloningSupported;
- (bool)isConnected;
- (bool)isEqual:(id)arg1;
- (bool)isExternal;
- (bool)isHiddenDisplay;
- (bool)isMainDisplay;
- (bool)isOverscanned;
- (id)name;
- (struct CGPoint { double x1; double x2; })nativeCenter;
- (double)nativeOrientation;
- (double)orientation;
- (long long)overscanCompensation;
- (struct CGSize { double x1; double x2; })pixelSize;
- (id)preferredMode;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })referenceBounds;
- (double)refreshRate;
- (struct CGSize { double x1; double x2; })safeOverscanRatio;
- (double)scale;
- (unsigned int)seed;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (bool)supportsExtendedColor;
- (long long)tags;
- (long long)type;
- (id)uniqueID;
- (id)uniqueIdentifier;

// Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard

- (id)UIScreen;
- (bool)isMainRootDisplay;

@end
