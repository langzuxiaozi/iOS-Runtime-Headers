/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

@interface UNNotificationAction : NSObject <NSCopying, NSSecureCoding> {
    NSString * _identifier;
    unsigned int  _options;
    NSString * _title;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) unsigned int options;
@property (nonatomic, readonly, copy) NSString *title;

+ (id)actionWithIdentifier:(id)arg1 title:(id)arg2 options:(unsigned int)arg3;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_description;
- (id)_initWithIdentifier:(id)arg1 title:(id)arg2 options:(unsigned int)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)options;
- (id)title;

@end
