#import "LoadCheat.h"
#import <UIKit/UIKit.h>
#import "Project/Main/MenuB.h"
#import "APIClient.h"

@interface PubgLoad()
@property (nonatomic, strong) ImGuiDrawView *vna;
@end

@implementation PubgLoad

extern bool MenDeal;
static UIImageView *iconImageView;
static PubgLoad *extraInfo;
UIWindow *mainWindow;

+ (void)load
{
    [super load];

    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(7.5* NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        mainWindow = [UIApplication sharedApplication].keyWindow;
        extraInfo =  [PubgLoad new];
        ImGuiDrawView *settings = [[ImGuiDrawView alloc] init];
            APIClient *API = [[APIClient alloc] init];
    [API setToken:@"TFTCY5j4DmDFMVBLCZ8iXNfmfuP5nwLCY0vcHB/DDBWNi0nwolEDstMEOrlEsxHyiUUj4M/7hRwYD6VApIf9c3kkgQYy6dWE/B69+eT5F0g="]; 
    [API paid:^{
            [extraInfo initTapGes];
            [extraInfo tapIconView];
            [extraInfo tapIconView];
            [settings UseSetting];
             }];
    });  
}

-(void)initTapGes
{
    iconImageView = [[UIImageView alloc] initWithFrame:CGRectMake(0, 0, 25, 25)];
    NSString *imageDataBase64 = @"";
    NSData *imageData = [[NSData alloc] initWithBase64EncodedString:imageDataBase64 options:NSDataBase64DecodingIgnoreUnknownCharacters];
    
    
    UIImage *image = [UIImage imageWithData:imageData];
    CGFloat cornerRadius = iconImageView.frame.size.width / 2.0;
    iconImageView.layer.cornerRadius = cornerRadius;
    iconImageView.layer.masksToBounds = YES;
    iconImageView.image = image;
    iconImageView.userInteractionEnabled = YES;
    [[UIApplication sharedApplication].keyWindow addSubview:iconImageView];
    [iconImageView addGestureRecognizer:[[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(tapIconView)]];
}

-(void)tapIconView
{
    if (!_vna) {
        ImGuiDrawView *vc = [[ImGuiDrawView alloc] init];
        _vna = vc;
    }
 
    if(MenDeal==true){
        MenDeal=false;
    } else {
        MenDeal=true;
        [[UIApplication sharedApplication].windows[0].rootViewController.view addSubview:_vna.view];
    }
}





















@end
