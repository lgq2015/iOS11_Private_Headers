/* made by EzioChiu
   Image: /System/Library/Frameworks/Messages.framework/Messages
 */

@interface _MSPresentationState : NSObject <NSSecureCoding> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    unsigned long long  _presentationStyle;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic) unsigned long long presentationStyle;

+ (bool)supportsSecureCoding;

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)presentationStyle;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPresentationStyle:(unsigned long long)arg1;

@end
