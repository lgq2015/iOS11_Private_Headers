/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFManagedActivityViewController : _SFActivityViewController {
    bool  sourceIsManaged;
}

@property (nonatomic) bool sourceIsManaged;

- (id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2 sharingURL:(id)arg3 sourceURL:(id)arg4;
- (void)setSourceIsManaged:(bool)arg1;
- (bool)sourceIsManaged;

@end
