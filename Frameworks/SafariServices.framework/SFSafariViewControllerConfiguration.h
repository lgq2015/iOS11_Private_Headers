/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFSafariViewControllerConfiguration : NSObject <NSCopying, NSSecureCoding> {
    bool  _barCollapsingEnabled;
    bool  _entersReaderIfAvailable;
}

@property (nonatomic) bool barCollapsingEnabled;
@property (nonatomic) bool entersReaderIfAvailable;

+ (bool)supportsSecureCoding;

- (bool)barCollapsingEnabled;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)entersReaderIfAvailable;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setBarCollapsingEnabled:(bool)arg1;
- (void)setEntersReaderIfAvailable:(bool)arg1;

@end
