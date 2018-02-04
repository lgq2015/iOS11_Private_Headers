/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
 */

@interface WGWidgetDatum : NSObject <WGDatum> {
    NSExtension * _representedExtension;
}

@property (nonatomic, readonly, copy) NSString *datumIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSExtension *representedExtension;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)datumIdentifier;
- (id)description;
- (unsigned long long)hash;
- (id)initWithExtension:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)representedExtension;

@end
