/* made by EzioChiu
   Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

@interface SPFont : NSObject <NSKeyedUnarchiverDelegate, NSSecureCoding> {
    UIFont * _font;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIFont *font;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)font;
- (id)initWithCoder:(id)arg1;
- (id)initWithFont:(id)arg1;
- (void)setFont:(id)arg1;
- (id)unarchiver:(id)arg1 didDecodeObject:(id)arg2;

@end
